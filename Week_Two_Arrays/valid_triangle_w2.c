#include <stdio.h>
#include <cs50.h>

bool valid_or_not(float s1, float s2, float s3);

int main(void)
{
    float s1 = get_float("Side 1: ");
    float s2 = get_float("Side 2: ");
    float s3 = get_float("Side 3: ");
    bool answer = valid_or_not(s1, s2, s3);

    if(answer == true)
    {
        printf("This is a valid triangle!\n");
    }
    else
    {
        printf("This is not a valid triangle!\n");
    }
}

bool valid_or_not(float s1, float s2, float s3)
{
    if(s1 <= 0 || s2 <= 0 || s3 <= 0)
    {
        return false;
    }
    else
    {
        if(s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s3)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}