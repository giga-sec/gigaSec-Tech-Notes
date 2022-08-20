/*Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in
the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either
case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange
that a leading or trailing - is taken literally.
 */

#include <stdio.h>

#define MAX 1000

void expand(char s1[], char s2[]) {
    int i = 0;  // tracks the index of s1
    int j = 0;  // tracks index of s2
    char start, end;
    do {
    // Check if input is only 1 value
    // or has 1 value left

    // Scan the range
    while (s1[i] != '-')
        i++;
    start = s1[i-1];
    end = s1[++i];

    // Check if distance between char is only 1 gap
    if (end - start == 1) {
        s2[j++] = start;
        continue;
    }

    // If last s2 char is the same as the start;
    if (j != 0)
        if (s2[j-1] == start)
            ++start;

    // Store the expanded version
    for (; start <= end; j++)
        s2[j] = start++;

    } while (s1[++i] != '\0');

    s2[j] = '\0';  // Always end string with \0
}

int main () {
    char range[MAX] = "a-c-e-g-o0-9";
    char result[MAX];
    expand(range, result);
    printf("%s", result);
}
/*
 * Expected Input (a string input)
 * a-z
 * 0-12
 * a-z0-9
 * a-b-c
 *
 * Expected Output
 * abcdefgchijklmnopqrstuvwxyz
 * 0 1 2 3 4 5 6 7 8 9 10 11 12
 * abcdefgchijklmnopqrstuvwxyz 0 1 2 3 4 5 6 7 8 9
 * a-b-c
 *
 * Not included
 * -> uppercase compatible
 * -> user input validity
 *
 * Wait what do you mean by leading/trailing is taken literally?
 * Like what literally? What?
 * So -9, like the fuck does that mean? Intuitively, we're gonna ignore the trailing...
 * ... but taking it literally? Like wtf? How does that even result into
 *
 * Plan:
 * Well, let's solve each and every input
 * Then we adjust the code base on the next input making sure that its backward compatible
 *
 * First one to solve a-z
 * "a-z"
 * See if a char is letter
 * See if char is -
 *
 * Basically we're gonna incremently print char until it reaches to the char of rightside of -
 *
 * Does it need to have a variable that remembers where the index of letters are?
 * This algo remembers the index of letters
 * Purpose: The char of start/end will be used to identify when to start and end
 * scan each char of string
 *  if char == '-'
 *  then start == str[previous_index]
 *       end == str[next_index]
 *
 * How do we store the expanded version?
 * for (int i = 0;start++ <= end; i++)
 *  str2[i] = start;
 *
 * Second one to solve:
 * Beautiful, I already solved second problem
 *
 * Third One
 * a-z0-9
 *
 * So I want the output to be
 * -> abc....z\n012...9
 *
 * The idea here is to take in multiple ranges
 * So we'd want the program to know that we have multiple ranges in the input.
 *
 * We can have a do while loop, where we check if next char isn't '\0'
 * So Algo
 * do {
 *
 * } while (s1[++i] != '\0')
 *
 * So I made an adjustment where we have two counters
 * i is for the scan of string 1
 * j is for the scan of string 2
 * I did this because we don't want to forget the index...
 * ... we were during the scan of range
 *
 * Success!
 * Now the fourth problem
* a-b-c
* So my current algo prints abbc
* Specifically each loop prints ab then bc
* a-b-c
* Hmmm, we could have a test where in it checks if...
* distance between char is only 1
* If so, we just copy the char directly :D
 */
