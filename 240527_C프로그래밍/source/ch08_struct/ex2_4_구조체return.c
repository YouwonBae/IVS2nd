#include <stdio.h>

struct vision{
    double left;
    double right;
};

typedef struct vision Vision;
Vision exchange(Vision robot);

int main(void){
    Vision robot;
    printf("좌 우 시력 >> ");
    scanf("%lf %lf", &robot.left, &robot.right);
    printf("입력된 좌우 시력은 : %.2lf\t %.2lf\n", robot.left, robot.right);
    robot = exchange(robot);
    printf("교체된 좌우 시력은 : %.2lf\t %.2lf\n", robot.left, robot.right);

    return 0;
}

Vision exchange(Vision robot){
    double temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}