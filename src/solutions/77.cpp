#include <iostream>
int main(){
    int N, maxScore;
    scanf("%d %d", &N, &maxScore);
    for (int i = 0; i < N; i++) {
         int tmpCal = 0, cnt = -2, tmpMax = -1, tmpMin = maxScore + 1, finalScore = 0, tmp;
         for (int j = 0; j < N; j++) {
              scanf("%d", &tmp);
              if (j == 0) {finalScore += tmp; continue;}
              if (tmp >= 0 && tmp <= maxScore) {
              cnt++; 
              tmpCal += tmp;
              if (tmp > tmpMax) tmpMax = tmp;
              if (tmp < tmpMin) tmpMin = tmp;
              }
            //   if (j == N - 1) {tmpCal -= tmpMax; tmpCal -= tmpMin; finalScore += (tmpCal * 1.0 / cnt);}
         }
    std::cout << int((((tmpCal - tmpMax - tmpMin) * 1.0 / cnt) + finalScore) / 2 + 0.5) << std::endl;
    }
    return 0;
}
