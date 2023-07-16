#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int max_scores[12] = {0}; // Initialize an array to store the maximum scores for each problem (indexed from 1 to 11)

        for (int i = 0; i < N; i++) {
            int p, s;
            scanf("%d %d", &p, &s);
            if (s > max_scores[p]) {
                max_scores[p] = s; // Update the maximum score for problem p if the current score is greater
            }
        }

        int total_score = 0;
        for (int i = 1; i <= 8; i++) {
            total_score += max_scores[i]; // Sum up the maximum scores of scorable problems (problems 1 to 8)
        }

        printf("%d\n", total_score);
    }

    return 0;
}
