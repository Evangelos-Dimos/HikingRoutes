#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct route
{
    
    char starting_point[50];
    int path_length;
    int uphill;
    int downhill;
    int maximum_altitude; 
    int minimum_altitude;
    char end_point[50];
    
};


struct route* readFromInput(int *n)
{
    
    scanf("%d ", n);
    
    struct route *A = (struct route*)malloc((*n) * sizeof(struct route));
    
    if (A == NULL) 
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    
    for(int i=0; i<*n; i++)
    {
        
        fgets(A[i].starting_point,50,stdin);
        A[i].starting_point[strcspn(A[i].starting_point,"\n")]='\0';
       
        scanf("%d ", &A[i].path_length);
        scanf("%d ", &A[i].uphill);
        scanf("%d ", &A[i].downhill);
        scanf("%d ", &A[i].maximum_altitude);
        scanf("%d ", &A[i].minimum_altitude);
       
        fgets(A[i].end_point,50,stdin);
        A[i].end_point[strcspn(A[i].end_point,"\n")]='\0';
        
    }
    
    return A;
    
}


void printData(struct route A[], int n)
{
    
    struct route temp;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if (A[j].path_length < A[j+1].path_length) 
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
    
    for (int i=0; i<n; i++)
    {
       
        if (strcmp(A[i].starting_point, A[i].end_point) == 0)
        {
            printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
            printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5));
        }
        else
        {
            printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
            printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5));
            
            printf("From %s to %s\n", A[i].end_point, A[i].starting_point);
            printf("Uphill %d, Downhill %d\n", A[i].downhill, A[i].uphill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].downhill/10.0)+0.5));
        }
        
    }
}

    
void findShort(struct route A[], int n)
{    
    
    int L;

    scanf("%d", &L);
    
    struct route temp;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if (A[j].path_length < A[j+1].path_length) 
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
    
    for (int i=0; i<n; i++)
    {
        
        if(A[i].path_length<=L)
        {
            if (strcmp(A[i].starting_point, A[i].end_point) == 0)
            {
                printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
                printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
                printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
                printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5));
            }
            else
            {
                printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
                printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
                printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
                printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5));
                
                printf("From %s to %s\n", A[i].end_point, A[i].starting_point);
                printf("Uphill %d, Downhill %d\n", A[i].downhill, A[i].uphill);
                printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
                printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].downhill/10.0)+0.5));
            }
        }
            
    }
      
}


void findLocation(struct route A[], int n)
{
    
    char location[50];
    
    scanf("  ");
    
    fgets(location,50,stdin);
    location[strcspn(location, "\n")]='\0';
    
    struct route temp;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if (A[j].path_length < A[j+1].path_length) 
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if(strcmp(location, A[i].starting_point) == 0)
        {
            printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
            printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5)); 
        }
        
        if(strcmp(location, A[i].end_point) == 0)
        {
            if(strcmp(A[i].starting_point, A[i].end_point) != 0)
            {
                printf("From %s to %s\n", A[i].end_point, A[i].starting_point);
                printf("Uphill %d, Downhill %d\n", A[i].downhill, A[i].uphill);
                printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
                printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].downhill/10.0)+0.5));
            }
        }
    }
    
}


void findUpHill(struct route A[], int n)
{
    
    struct route temp;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if (A[j].path_length < A[j+1].path_length) 
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if(A[i].uphill>A[i].downhill)
        {
            printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
            printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5)); 
        }
        if(A[i].uphill<A[i].downhill)
        {
            printf("From %s to %s\n", A[i].end_point, A[i].starting_point);
            printf("Uphill %d, Downhill %d\n", A[i].downhill, A[i].uphill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].downhill/10.0)+0.5));
        }
    }
    
}


void findDownHill(struct route A[], int n)
{
    
    struct route temp;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if (A[j].path_length < A[j+1].path_length) 
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if(A[i].uphill<A[i].downhill)
        {
            printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
            printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5)); 
        }
        if(A[i].uphill>A[i].downhill)
        {
            printf("From %s to %s\n", A[i].end_point, A[i].starting_point);
            printf("Uphill %d, Downhill %d\n", A[i].downhill, A[i].uphill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].downhill/10.0)+0.5));
        }
    }
    
}


void findAltitude(struct route A[], int n)
{
    
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    struct route temp;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if (A[j].path_length < A[j+1].path_length) 
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if(A[i].minimum_altitude>=min && A[i].maximum_altitude<=max)
        {
            if (strcmp(A[i].starting_point, A[i].end_point) == 0)
            {
                printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
                printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
                printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
                printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5));
            }
            else
            {
                printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
                printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
                printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
                printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5));
                
                printf("From %s to %s\n", A[i].end_point, A[i].starting_point);
                printf("Uphill %d, Downhill %d\n", A[i].downhill, A[i].uphill);
                printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
                printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].downhill/10.0)+0.5));
            }
        }
    }
    
}


void findTimely(struct route A[], int n)
{
    
    int T;
    
    scanf("%d", &T);
    
    struct route temp;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if (A[j].path_length < A[j+1].path_length) 
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if((int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5)<=T)
        {
            printf("From %s to %s\n", A[i].starting_point, A[i].end_point);
            printf("Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].uphill/10.0)+0.5));
        }
        
        if((int)((A[i].path_length/65.0)+(A[i].downhill/10.0)+0.5)<=T && strcmp(A[i].end_point, A[i].starting_point) != 0)
        {
            printf("From %s to %s\n", A[i].end_point, A[i].starting_point);
            printf("Uphill %d, Downhill %d\n", A[i].downhill, A[i].uphill);
            printf("Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            printf("Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length/65.0)+(A[i].downhill/10.0)+0.5));  
        }
    }
    
}


struct route* readFromFile(int *n) 
{
    
    char filename[100];
    FILE *fp;
    char line[100];
    
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\r\n")] = '\0';  

    fp = fopen(filename, "r");
    if (fp == NULL) 
    {
        printf("Error opening file.\n");
        *n = 0;
        return NULL;
    }
   
    fgets(line, sizeof(line), fp);
    sscanf(line, "%d", n);  
    
    struct route *A = malloc((*n) * sizeof(struct route));
    if (A == NULL) 
    {
        printf("Memory allocation failed!\n");
        fclose(fp);
        exit(1);
    }

    for (int i=0; i<*n; i++) 
    {
      
        fgets(A[i].starting_point, sizeof(A[i].starting_point), fp);
        A[i].starting_point[strcspn(A[i].starting_point, "\r\n")] = '\0';

        fgets(line, sizeof(line), fp);
        sscanf(line, "%d %d %d %d %d", 
               &A[i].path_length, 
               &A[i].uphill, 
               &A[i].downhill, 
               &A[i].maximum_altitude, 
               &A[i].minimum_altitude);

        fgets(A[i].end_point, sizeof(A[i].end_point), fp);
        A[i].end_point[strcspn(A[i].end_point, "\r\n")] = '\0';
    }

    fclose(fp);
    
    return A;
    
}


void saveData(struct route A[], int n) 
{
    
    char filename[100];
    FILE *fp;

    fgets(filename, 100, stdin);
    filename[strcspn(filename, "\n")] = '\0'; 

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    struct route temp;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if (A[j].path_length < A[j+1].path_length) 
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            } 
        }
    }
    
    for (int i=0; i<n; i++) 
    {
        if (strcmp(A[i].starting_point, A[i].end_point) == 0) 
        {
            fprintf(fp, "From %s to %s\n", A[i].starting_point, A[i].end_point);
            fprintf(fp, "Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
            fprintf(fp, "Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            fprintf(fp, "Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length / 65.0) + (A[i].uphill / 10.0) + 0.5));
        } 
        else 
        {
            fprintf(fp, "From %s to %s\n", A[i].starting_point, A[i].end_point);
            fprintf(fp, "Uphill %d, Downhill %d\n", A[i].uphill, A[i].downhill);
            fprintf(fp, "Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            fprintf(fp, "Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length / 65.0) + (A[i].uphill / 10.0) + 0.5));

            fprintf(fp, "From %s to %s\n", A[i].end_point, A[i].starting_point);
            fprintf(fp, "Uphill %d, Downhill %d\n", A[i].downhill, A[i].uphill);
            fprintf(fp, "Max altitude %d, Min altitude %d\n", A[i].maximum_altitude, A[i].minimum_altitude);
            fprintf(fp, "Length %d, Estimated time %d min\n\n", A[i].path_length, (int)((A[i].path_length / 65.0) + (A[i].downhill / 10.0) + 0.5));
        }
    }

    fclose(fp);
    
}


