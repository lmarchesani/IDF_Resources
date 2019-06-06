#include <stdlib.h>
#include <stdio.h> 
#include <math.h>


int main()
{
    //my zoo of variables
    float face_to_face1, face_to_face2, face_to_face3;
    float eye_distance[4] = {0};
    float chin_nose[4] = {0};
    float ratio[4] = {0};
    int i,j;

    //collect input for nose and eye
    for (j = 0; j<3;j++)
    {
    printf("Input the nose to chin and then the eye distance for person %i\n",(j+1));
    scanf("%f %f",&chin_nose[j], &eye_distance[j]);
    
    }
    //get the ratios needed
    for (i = 0; i<3; i++)
    {
        ratio[i] = (eye_distance[i]/chin_nose[i]);
    }
    //compares the ratio of element 0 to element 1  
    face_to_face1 = fabs((ratio[0])-(ratio[1]));
    //compares the ratio of element 0 to element 2 
    face_to_face2 = fabs((ratio[0])-(ratio[2]));
    //compares the ratio of element 1 to element 2 
    face_to_face3 = fabs((ratio[1])-(ratio[2]));

    system("cls");
    
    if ((face_to_face1<(face_to_face2))&&(face_to_face1<face_to_face3))
    {
        printf("The most similar faces are faces 1 and 2\n");
        return 0;
    }
    else if((face_to_face2<face_to_face1)&&(face_to_face2<face_to_face3))
    {
        printf ("the most similar faces are faces 1 and 3\n");
        return 0;
    }
    else
    {
        printf("The most similar faces are faces 2 and 3\n");
        return 0;
    }
}

