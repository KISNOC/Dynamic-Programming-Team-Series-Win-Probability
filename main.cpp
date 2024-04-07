#include <iostream>
#include <vector>
#include <iomanip>

#include "tableau.hpp"

void simulate_series(unsigned int games, float probability, float probability1);

int main() {
    unsigned int nb_games = 5;
    float winnning_probability = 0.5;
    float losing_probability = 1 - winnning_probability;

    simulate_series(nb_games, winnning_probability, losing_probability);

    return 0;
}

void simulate_series(unsigned int nb_games,
                     float winnning_probability,
                     float losing_probability) {

    unsigned int dimensions[2] = {nb_games + 1, nb_games + 1};
    Tableau<float> table(std::vector<unsigned int>(dimensions, dimensions + 2));

    /* Basic case */
    /* If there are no more games left for team B to win, then team A has loss the series */
    for (unsigned int i = 0; i <= nb_games; i++) {
        table.at(i, 0) = 0;
    }
    /* If there are no more games left for team A to win, then team A has won the series */
    for (unsigned int j = 0; j <= nb_games; j++) {
        table.at(0, j) = 1;
    }
    /* If there are equal number of games left for both teams to win, then the probability of winning is the initialized one */
    for (unsigned int i = 1; i <= nb_games; i++) {
        for (unsigned int j = 1; j <= nb_games; j++) {
            table.at(i, j) = winnning_probability;
        }
    }


}
