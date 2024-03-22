#include <iostream>
#include <algorithm>
using namespace std;



struct Point{
  int x;
  int y;
};

bool compare(Point a, Point b){
  if(a.x == b.x){
    return a.y < b.y;
  }
  return a.x < b.x;
}


int main() {
  
  int input;
  scanf("%d", &input);

  Point point[input];

  for(int i = 0; i < input; i++){
    scanf("%d %d", &point[i].x, &point[i].y);
  }

  sort(point, point+input, compare);

  for(int i = 0; i < input; i++){
    printf("%d %d\n", point[i].x, point[i].y);
  }

  return 0;


 
}
