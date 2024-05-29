#include <stdio.h>

struct vision{
    double left;
    double right;
};

typedef struct vision Vision;
Vision exchange(Vision robot);

int main(void){
    Vision robot;
    printf("�� �� �÷� >> ");
    scanf("%lf %lf", &robot.left, &robot.right);
    printf("�Էµ� �¿� �÷��� : %.2lf\t %.2lf\n", robot.left, robot.right);
    robot = exchange(robot);
    printf("��ü�� �¿� �÷��� : %.2lf\t %.2lf\n", robot.left, robot.right);

    return 0;
}

Vision exchange(Vision robot){
    double temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}