#include <stdio.h>
struct Point
{
    float x;
    float y;
};
struct Triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};

int main()
{
    struct Point p1 = {1, 2};
    struct Point p2 = {2, 3};
    struct Point p3 = {3, 6};
    struct Triangle t ={p1,p2,p3};
}