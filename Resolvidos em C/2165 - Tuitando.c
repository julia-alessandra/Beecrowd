#include <stdio.h>
#include <string.h>
 
int main() {
    char tweet[501];

    fgets(tweet, 501, stdin);
    
    tweet[strcspn(tweet, "\n")] = '\0';
    
    if (strlen(tweet) <= 140)
        printf("TWEET\n");
    else
        printf("MUTE\n");

    return 0;
}
