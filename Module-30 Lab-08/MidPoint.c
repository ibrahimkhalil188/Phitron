#include <stdio.h>
#include <math.h>
struct Point
{
    float x;
    float y;
};
struct Point midPoint(struct Point p1, struct Point p2)
{
    struct Point answer;
    answer.x = (p1.x + p2.x) / 2;
    answer.y = (p1.y + p2.y) / 2;
    return answer;
};
int main()
{
    struct Point p1 = {1, 1};
    struct Point p2 = {5, 6};
    struct Point p3 = midPoint(p1, p2);

    printf("%.2f %.2f", p3.x, p3.y);
}