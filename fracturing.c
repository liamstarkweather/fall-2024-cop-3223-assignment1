//Will Liam Starkweather WI001953
#include <stdio.h>
#include <math.h>
#define PI 3.14159

//Function to request user input
double askForUserInput()
{
    double userInput = 0;
    scanf("%lf",&userInput);

    return (userInput);
}

//Requests input coordinates and does the calculation for distance between coordinates.
//Assignment instructions are ambiguous, I'm not sure if I'm supposed to call for point inputs in-line with the final output so I went this route to keep formatting clean.
double subCalculateDistance()
{
    //Request Point Coordinates
    printf("Input x1 ");
    double x1 = askForUserInput();

    printf("Input x2 ");
    double x2 = askForUserInput();

    printf("Input y1 ");
    double y1 = askForUserInput();

    printf("Input y2 ");
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %.3lf, y1 = %.3lf\nPoint #2 entered: x2 = %.3lf, y2 = %.3lf\n",x1,y1,x2,y2);

    //Distance Calculation
    double xDiff = x2 - x1;
    double yDiff = y2 - y1;
    double xSquare = pow(xDiff,2);
    double ySquare = pow(yDiff,2);
    double distance = sqrt(xSquare + ySquare);

    return distance;
}

//Prints the required output for calculateDistance() per assignment.
//Broken out from subCalculateDistance() to allow subCalc to be reused without excess output.
double calculateDistance()
{
    double distance = subCalculateDistance();
    printf("The distance between the two points is %.3lf\n",distance);
    
    return distance;
}

//Calculates and outputs perimeter
double calculatePerimeter()
{
    double distance = subCalculateDistance();
    double perimeter = PI * distance;
    printf("The perimeter of the city encompassed by your request is %.3lf\n",perimeter);

    return 1;
}

//Calculates and outputs area
double calculateArea()
{
    double distance = subCalculateDistance();
    double radius = distance * 0.5;
    double area = PI * pow(radius,2);
    printf("The area of the city encompassed by your request is %.3lf\n",area);

    return 1;
}

//The width of a circle is the same as its diameter.
double calculateWidth()
{
    double distance = subCalculateDistance();
    printf("The width of the city encompassed by your request is %.3lf\n",distance);

    return 1;
}

//The height of a circle is the same as its diameter.
double calculateHeight()
{
    double distance = subCalculateDistance();
    printf("The height of the city encompassed by your request is %.3lf\n",distance);

    return 1;
}

int main (int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
};
