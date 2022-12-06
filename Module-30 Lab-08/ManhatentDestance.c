#include <stdio.h>
struct Distance
{
    int x;
    int y;
};
int manhattanDistance(struct Distance p1, struct Distance p2)
{
    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}
int main()
{
    struct Distance p1;
    scanf("%d", &p1.x);
    scanf("%d", &p1.y);
    struct Distance p2 = {.x = 4, .y = 5};
    int ans = manhattanDistance(p1, p2);
    printf("%d", ans);
}