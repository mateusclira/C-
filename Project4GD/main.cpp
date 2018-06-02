
/* Question          : count number of students scoring X marks in GQ and store it in 'sum_gq'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   int sum_gq[]      : Integer array to be computed  */
void getTotalGQ(int numOfStudents, int gq[], int sum_gq[]) {
    // Write your solution code below this line
    int i;
    for(i = 0; i < numOfStudents;i++)
    {
        if(gq[i] == 0)
            sum_gq[0]++;
        else if(gq[i] % 10 == 1)
            sum_gq[1]++;
        else if(gq[i] % 10 == 2)
            sum_gq[2]++;
        else if(gq[i] % 10 == 3)
            sum_gq[3]++;
        else if(gq[i] % 10 == 4)
            sum_gq[4]++;
        else if(gq[i] % 10 == 5)
            sum_gq[5]++;
        else if(gq[i] % 10 == 6)
            sum_gq[6]++;
        else if(gq[i] % 10 == 7)
            sum_gq[7]++;
        else if(gq[i] % 10 == 8)
            sum_gq[8]++;
        else if(gq[i] % 10 == 9)
            sum_gq[9]++;
        else if(gq[i] % 10 == 0)
            sum_gq[10]++;
    }

}



/* Question          : Count number of students scoring Y marks in GPA and store it in 'sum_gpa'
   int numOfStudents : Integer number containing the total number of students
   float gpa[]       : Array of type float containing the GPA marks of all students
   int sum_gpa[]     : Integer array to be computed */
void getTotalGPA(int numOfStudents, float gpa[], int sum_gpa[]) {
    // Write your solution code below this line
    int i;

    for (i = 0; i < numOfStudents; i++)
    {
        if(gpa[i] == 0)
            sum_gpa[0]++;
        else if(gpa[i]*10 == 3)
            sum_gpa[1]++;
        else if(gpa[i]*10 == 6)
            sum_gpa[2]++;
        else if(gpa[i] == 1)
            sum_gpa[3]++;
    }

}



/* Question          : Count number of students scoring X marks in GQ, Y marks in GPA, total, and result, in 'count[][]'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   float gpa[]       : Array of type float, containing the GPA marks of all students
   int count[][]     : Integer array to be computed */
void getTotalCount(int numOfStudents, int gq[], float gpa[], int count[][5]) {
    // Write your solution code below this line
    int i;

    for(i = 0; i < numOfStudents;i++)
    {
        if(gq[i] == 0 && (gpa[i] == 0))
        {
            count[0][0]++;
            count[11][4]++;
            count[11][0]++;
            count[0][4]++;
        }
        else if(gq[i] % 10 == 1 && (gpa[i] == 0))
        {
            count[1][0]++;
            count[11][4]++;
            count[11][0]++;
            count[1][4]++;
        }
        else if(gq[i] % 10 == 2 && (gpa[i] == 0))
        {
            count[2][0]++;
            count[11][4]++;
            count[11][0]++;
            count[2][4]++;
        }
        else if(gq[i] % 10 == 3 && (gpa[i] == 0))
        {
            count[3][0]++;
            count[11][4]++;
            count[11][0]++;
            count[3][4]++;
        }
        else if(gq[i] % 10 == 4 && (gpa[i] == 0))
        {
            count[4][0]++;
            count[11][4]++;
            count[11][0]++;
            count[4][4]++;
        }
        else if(gq[i] % 10 == 5 && (gpa[i] == 0))
        {
            count[5][0]++;
            count[11][4]++;
            count[11][0]++;
            count[5][4]++;
        }
        else if(gq[i] % 10 == 6 && (gpa[i] == 0))
        {
            count[6][0]++;
            count[11][4]++;
            count[11][0]++;
            count[6][4]++;
        }
        else if(gq[i] % 10 == 7 && (gpa[i] == 0))
        {
            count[7][0]++;
            count[11][4]++;
            count[11][0]++;
            count[7][4]++;
        }
        else if(gq[i] % 10 == 8 && (gpa[i] == 0))
        {
            count[8][0]++;
            count[11][4]++;
            count[11][0]++;
            count[8][4]++;
        }
        else if(gq[i] % 10 == 9 && (gpa[i] == 0))
        {
            count[9][0]++;
            count[11][4]++;
            count[11][0]++;
            count[9][4]++;
        }
        else if(gq[i] % 10 == 0 && (gpa[i] == 0))
        {
            count[10][0]++;
            count[11][4]++;
            count[11][0]++;
            count[10][4]++;
        }


        if(gq[i] == 0 && (gpa[i]*10 == 3))
        {
            count[0][1]++;
            count[11][4]++;
            count[11][1]++;
            count[0][4]++;
        }
        else if(gq[i] % 10 == 1 && (gpa[i]*10 == 3))
        {
            count[1][1]++;
            count[11][4]++;
            count[11][1]++;
            count[1][4]++;
        }
        else if(gq[i] % 10 == 2 && (gpa[i]*10 == 3))
        {
            count[2][1]++;
            count[11][4]++;
            count[11][1]++;
            count[2][4]++;
        }
        else if(gq[i] % 10 == 3 && (gpa[i]*10 == 3))
        {
            count[3][1]++;
            count[11][4]++;
            count[11][1]++;
            count[3][4]++;
        }

        else if(gq[i] % 10 == 4 && (gpa[i]*10 == 3))
        {
            count[4][1]++;
            count[11][4]++;
            count[11][1]++;
            count[4][4]++;
        }
        else if(gq[i] % 10 == 5 && (gpa[i]*10 == 3))
        {
            count[5][1]++;
            count[11][4]++;
            count[11][1]++;
            count[5][4]++;
        }
        else if(gq[i] % 10 == 6 && (gpa[i]*10 == 3))
        {
            count[6][1]++;
            count[11][4]++;
            count[11][1]++;
            count[6][4]++;
        }
        else if(gq[i] % 10 == 7 && (gpa[i]*10 == 3))
        {
            count[7][1]++;
            count[11][4]++;
            count[11][1]++;
            count[7][4]++;
        }
        else if(gq[i] % 10 == 8 && (gpa[i]*10 == 3))
        {
            count[8][1]++;
            count[11][4]++;
            count[11][1]++;
            count[8][4]++;
        }
        else if(gq[i] % 10 == 9 && (gpa[i]*10 == 3))
        {
            count[9][1]++;
            count[11][4]++;
            count[11][1]++;
            count[9][4]++;
        }
        else if(gq[i] % 10 == 0 && (gpa[i]*10 == 3))
        {
            count[10][1]++;
            count[11][4]++;
            count[11][1]++;
            count[10][4]++;
        }


    if(gq[i] == 0 && (gpa[i]*10 == 6))
        {
            count[0][2]++;
            count[11][4]++;
            count[11][2]++;
            count[0][4]++;
        }
        else if(gq[i] % 10 == 1 && (gpa[i]*10 == 6))
        {
            count[1][2]++;
            count[11][4]++;
            count[11][2]++;
            count[1][4]++;
        }
        else if(gq[i] % 10 == 2 && (gpa[i]*10 == 6))
        {
            count[2][2]++;
            count[11][4]++;
            count[11][2]++;
            count[2][4]++;
        }
        else if(gq[i] % 10 == 3 && (gpa[i]*10 == 6))
        {
            count[3][2]++;
            count[11][4]++;
            count[11][2]++;
            count[3][4]++;
        }

        else if(gq[i] % 10 == 4 && (gpa[i]*10 == 6))
        {
            count[4][2]++;
            count[11][4]++;
            count[11][2]++;
            count[4][4]++;
        }
        else if(gq[i] % 10 == 5 && (gpa[i]*10 == 6))
        {
            count[5][2]++;
            count[11][4]++;
            count[11][2]++;
            count[5][4]++;
        }
        else if(gq[i] % 10 == 6 && (gpa[i]*10 == 6))
        {
            count[6][2]++;
            count[11][4]++;
            count[11][2]++;
            count[6][4]++;
        }
        else if(gq[i] % 10 == 7 && (gpa[i]*10 == 6))
        {
            count[7][2]++;
            count[11][4]++;
            count[11][2]++;
            count[7][4]++;
        }
        else if(gq[i] % 10 == 8 && (gpa[i]*10 == 6))
        {
            count[8][2]++;
            count[11][4]++;
            count[11][2]++;
            count[8][4]++;
        }
        else if(gq[i] % 10 == 9 && (gpa[i]*10 == 6))
        {
            count[9][2]++;
            count[11][4]++;
            count[11][2]++;
            count[9][4]++;
        }
        else if(gq[i] % 10 == 0 && (gpa[i]*10 == 6))
        {
            count[10][2]++;
            count[11][4]++;
            count[11][2]++;
            count[10][4]++;
        }



        if(gq[i] == 0 && (gpa[i] == 1))
        {
            count[0][3]++;
            count[11][4]++;
            count[11][3]++;
            count[0][4]++;
        }
        else if(gq[i] % 10 == 1 && (gpa[i] == 1))
        {
            count[1][3]++;
            count[11][4]++;
            count[11][3]++;
            count[1][4]++;
        }
        else if(gq[i] % 10 == 2 && (gpa[i] == 1))
        {
            count[2][3]++;
            count[11][4]++;
            count[11][3]++;
            count[2][4]++;
        }
        else if(gq[i] % 10 == 3 && (gpa[i] == 1))
        {
            count[3][3]++;
            count[11][4]++;
            count[11][3]++;
            count[3][4]++;
        }
        else if(gq[i] % 10 == 4 && (gpa[i] == 1))
        {
            count[4][3]++;
            count[11][4]++;
            count[11][3]++;
            count[4][4]++;
        }
        else if(gq[i] % 10 == 5 && (gpa[i] == 1))
        {
            count[5][3]++;
            count[11][4]++;
            count[11][3]++;
            count[5][4]++;
        }
        else if(gq[i] % 10 == 6 && (gpa[i] == 1))
        {
            count[6][3]++;
            count[11][4]++;
            count[11][3]++;
            count[6][4]++;
        }
        else if(gq[i] % 10 == 7 && (gpa[i] == 1))
        {
            count[7][3]++;
            count[11][4]++;
            count[11][3]++;
            count[7][4]++;
        }
        else if(gq[i] % 10 == 8 && (gpa[i] == 1))
        {
            count[8][3]++;
            count[11][4]++;
            count[11][3]++;
            count[8][4]++;
        }
        else if(gq[i] % 10 == 9 && (gpa[i] == 1))
        {
            count[9][3]++;
            count[11][4]++;
            count[11][3]++;
            count[9][4]++;
        }
        else if(gq[i] % 10 == 0 && (gpa[i] == 1))
        {
            count[10][3]++;
            count[11][4]++;
            count[11][3]++;
            count[10][4]++;
        }
    }
}

