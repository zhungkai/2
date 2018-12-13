#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 13
#define Z 7
int main()
{
	int face,face1, face2;
	int roll;
	int frequency[N] = { 0 };
	int frequency1[Z] = { 0 };
	int frequency2[Z] = { 0 };

	srand(time(0));

	for (roll = 1;roll <= 36000;roll++)
	{
		face1 = rand() % 6 + 1;
		frequency1[face1]+=1;
		face2 = rand() % 6 + 1;
		frequency2[face2] += 1;
		face = face1 + face2;
		frequency[face] += 1;
	}
	
	for (face = 2;face <=12;face++)
	{
		printf("%d出現次數:%d\n", face, frequency[face]);
	}
	system("pause");
	return 0;
}