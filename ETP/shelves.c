#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    

    int T;
    scanf("%d", &T); // Number of test cases

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N); // Number of shelves

        int shelves[N];

        // Read the number of books on each shelf
        for (int i = 0; i < N; i++) {
            scanf("%d", &shelves[i]);
        }

        int Q;
        scanf("%d", &Q); // Number of queries

        for (int q = 0; q < Q; q++) {
            int flag;
            scanf("%d", &flag); // Query

            if (flag == 1) {
                int x, k;
                scanf("%d %d", &x, &k); // Shelf number and new number of books
                shelves[x - 1] = k; // no. of books updation on x shelf
            } else {
                int x, y, k;
                scanf("%d %d %d", &x, &y, &k); // Range of shelves(b/w x & y) and kth rank

                int subShelves[y - x + 1];

                // array jo range ke andar shelves define karega (new array)
                for (int i = x - 1, j = 0; i < y; i++, j++) {
                    subShelves[j] = shelves[i];
                }

                // sorting the array  (if flag==0)
                for (int i = 0; i < y - x; i++) {
                    for (int j = 0; j < y - x - i; j++) {
                        if (subShelves[j] > subShelves[j + 1]) {
                            // Swap shelves[j] and shelves[j+1]
                            int temp = subShelves[j];
                            subShelves[j] = subShelves[j + 1];
                            subShelves[j + 1] = temp;
                        }
                    }
                }

                printf("%d\n", subShelves[k - 1]);
            }
        }
    }

    
    
    return 0;
}
