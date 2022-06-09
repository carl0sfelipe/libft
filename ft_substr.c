#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* ft_substr(const char *src, unsigned int start, size_t end)
{
    // get the length of the destination string
    int size = end - start;

	if (!src)
		return (NULL);

    // allocate (size + 1) chars for destination (+1 for extra null character)
    char *dest = (char*)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
    // extracts characters between start'th and end'th index from source string
    // and copy them into the destination string
 
	int index = 0;

    while(start < end && (src[start] != '\0'))
 {
     dest[index] = src[start];
     index++;
     start++;
 }
    // null-terminate the destination string
    dest[index] = '\0';
 
    // return the destination string
    return dest;
}

int main()
{
    char src[] = "substr function Implementation";
 
    int m = 7;
    int n = 12;
 
    char *dest = ft_substr(src, m, n);
 
    printf("%s\n", dest);
    puts(dest);

 
    return 0;
}
