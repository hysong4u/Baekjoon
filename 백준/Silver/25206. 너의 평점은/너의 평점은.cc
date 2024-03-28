#include <iostream>
using namespace std;

struct Score{
  string subject;
  float credit;
  string grade;
};

float calculateScore(Score *score){
  float score_sum = 0;
  float result = 0;
  float grade;
  float credit_sum = 0;
  
  
   for(int i = 0; i < 20; i++){
     if (score[i].grade == "P") continue; 
     if(score[i].grade == "A+") grade = 4.5; 
     if(score[i].grade == "A0") grade = 4.0; 
     if(score[i].grade == "B+") grade = 3.5; 
     if(score[i].grade == "B0") grade = 3.0; 
     if(score[i].grade == "C+") grade = 2.5; 
     if(score[i].grade == "C0") grade = 2.0; 
     if(score[i].grade == "D+") grade = 1.5; 
     if(score[i].grade == "D0") grade = 1.0; 
     if(score[i].grade == "F") grade = 0; 

     score_sum += grade * score[i].credit;
     credit_sum += score[i].credit;

   }
  
     result = score_sum / credit_sum;
     return result;

   
}

int main() {

  Score *score = new Score[20];
  
  for(int i = 0; i < 20; i++){
    cin >> score[i].subject;
    cin >> score[i].credit;
    cin >> score[i].grade;
  }

  cout << calculateScore(score);

  delete []score;
}
