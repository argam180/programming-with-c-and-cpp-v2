/* WAP to store 'n' natural numbers in an array. */
int numbers[50], n;

puts("Enter n: ");
scanf("%d", &n);

/* Store 'n' natural numbers in the array. */
for (int i = 0; i < n; i++) {
    numbers[i] = i + 1;
}

/* Print all natural numbers stored in the array. */
printf("The values present in the array: ");
for (int i = 0; i < n; i++) {
    printf("%d ", numbers[i]);
}
