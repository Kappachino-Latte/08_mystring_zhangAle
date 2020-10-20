#include "mystring.h"

int mystrlen (char *s) {

	int length = 0;
	
	while (*s) {
		length++;
		s++;
	}
	
	return length;
}

char * mystrcpy (char *s1, char *s2) {

	char * temp_pointer = s1;
	while (*s2) {
		*s1 = *s2;
		s1++;
		s2++;
	}
	
	*s1 = '\0';
	return temp_pointer;
}

char * mystrncpy (char *s1, char *s2, int n) {

	char * temp_pointer = s1;
	int i = 0;
	
	while ( (*s2) && (i < n) ) {
		*s1 = *s2;
		s1++;
		s2++;
		i++;
	}

	while (i < n) {
		*s1 = '\0';
		i++;
		}
			
	return temp_pointer;
}

char * mystrcat (char *s1, char *s2) {
	
	int len = mystrlen(s1);
	
	int i;
	for (i = 0; s2[i]; i++)
		s1 [len + i] = s2[i];
	
	return s1;
}

char * mystrchr (char * s, int c) {

	while( (*s) && (*s != c) ) 
		++s; 
		
    	if ( (*s) || (!c) ) 
    		return s;
    		
    	return 0;
}

int mystrcmp (char *s1, char *s2) {

	while ( (*s1) && (*s2) ) {
		if (*s1 < *s2)
			return -1;
		if (*s1 > *s2)
			return 1;
		s1++;
		s2++;
	}
	
	if ( (!*s1) && (!*s2) )
		return 0;
	if (!*s2)
		return 1;
		
	return -1;
}
	


