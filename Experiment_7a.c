/*
1 - /**********
2  NAME: SIDDESH
3  BRANCH: CIVIL
4  DIV: B
5  ROLL NO: 31
6  UNI: 2510044
7  **********/
8  #include <stdio.h>
9
10 int main()
11 {
12   int n, i, arr[100], largest;
13   printf("Enter number of elements: ");
14   scanf("%d", &n);
15
16   printf("Enter %d elements: \n", n);
17   for (i = 0; i < n; i++) {
18     scanf("%d", &arr[i]);
19   }
20
21   largest = arr[0];
22
23   for (i = 1; i < n; i++) {
24     if (arr[i] > largest) {
25       largest = arr[i];
26     }
27   }
28
29   printf("Largest element = %d\n", largest);
30
31   return 0;
32 }
