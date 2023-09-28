#include <vector>;

void bubble(std::vector<int> x) {
    int n = x.size();
    bool sorted = false;
    int temp = 0;
    while (sorted == false) {
        sorted = true;
        for (int i = 1 ; i < n ; i++) {
            if (x[i - 1] > x[i]) {
                temp = x[i - 1];
                x[i - 1] = x[i];
                x[i] = temp;
                sorted = false;
            }
        }
    }
}