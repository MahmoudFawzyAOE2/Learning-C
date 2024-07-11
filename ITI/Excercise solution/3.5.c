#include <stdio.h>
#include<limits.h>
#include<float.h>

int main() {
    int n, i ;
    float value, max, min, s_max, s_min;

    printf("Enter number of values you will enter: ");
    scanf("%d", &n);

    for (i=1; i<n+1; i++)
        {

        printf("Enter value [%d]: ",i);
        scanf("%f", &value);

        if (i==1) max=min=s_max=s_min=value ;
        else
        {

        /*inserting at the low end*/
        if(value < s_min)
            {
            if (max==s_max) s_max=s_min;

            if(value < min)
                {
                s_min = min;
                min = value;
                }
            else
                s_min = value ;
            }

        /*inserting at the high end*/
        else if(value > s_max)
            {
            if (min==s_min) s_min=s_max;
            if(value > max)
                {
                s_max = max;
                max = value;
                }
            else
                s_max = value ;
            }
        /*inserting in the middle*/
        else if (max==s_max && value<s_max)
            s_max=value;

        else if (min==s_min && value>s_min)
            s_min=value;
        }
        printf("\n \n Current ranges is from  %7.2f to %7.2f : %7.2f to %7.2f \n ",min, s_min, s_max, max);
        }

}
