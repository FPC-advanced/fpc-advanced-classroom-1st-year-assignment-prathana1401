//Write a program to find the permeter of a polygon
#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(char *prompt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);

int main() {
    Polygon poly;

    // Input the number of sides
    poly.sides = input_n();

    // Input coordinates of points
    input_polygon(&poly);

    // Calculate perimeter
    find_perimeter(&poly);

    // Output result
    output(poly);

    return 0;
}

int input_n() {
    int n;
    printf("Enter the number of sides of the polygon:\n");
    scanf("%d", &n);
    return n;
}

Point input_point(char *prompt_msg) {
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int input_polygon(Polygon *p) {
    int i;
    for (i = 0; i < p->sides; ++i) {
        char prompt_msg[50];
        sprintf(prompt_msg, "Enter the coordinates of point %d (x,y):\n", i + 1);
        p->p[i] = input_point(prompt_msg);
    }
    return i;
}

float find_distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void find_perimeter(Polygon *p) {
    p->perimeter = 0.0;
    for (int i = 0; i < p->sides; i++) {
        int next = (i + 1) % p->sides;
        p->perimeter += find_distance(p->p[i], p->p[next]);
    }
}

void output(Polygon p) {
    printf("The perimeter of the polygon is %.6f\n", p.perimeter);
}
