#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Returns 'true' if the character is a DELIMITER.
bool isDelimiter(char ch)
{
	if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
		ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
		ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
		ch == '[' || ch == ']' || ch == '{' || ch == '}')
		return (true);
	return (false);
}

// Returns 'true' if the character is an OPERATOR.
bool isOperator(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' ||
		ch == '/' || ch == '>' || ch == '<' ||
		ch == '=')
		return (true);
	return (false);
}

// Returns 'true' if the string is a VALID IDENTIFIER.
bool validIdentifier(char* str)
{
	if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
		str[0] == '3' || str[0] == '4' || str[0] == '5' ||
		str[0] == '6' || str[0] == '7' || str[0] == '8' ||
		str[0] == '9' || isDelimiter(str[0]) == true)
		return (false);
	return (true);
}

// Returns 'true' if the string is a KEYWORD.
bool isKeyword(char* str)
{
	if (!strcmp(str, "if") || !strcmp(str, "else") ||
		!strcmp(str, "while") || !strcmp(str, "do") ||
		!strcmp(str, "break") ||
		!strcmp(str, "continue") || !strcmp(str, "int")
		|| !strcmp(str, "double") || !strcmp(str, "float")
		|| !strcmp(str, "return") || !strcmp(str, "char")
		|| !strcmp(str, "case") || !strcmp(str, "char")
		|| !strcmp(str, "sizeof") || !strcmp(str, "long")
		|| !strcmp(str, "short") || !strcmp(str, "typedef")
		|| !strcmp(str, "switch") || !strcmp(str, "unsigned")
		|| !strcmp(str, "void") || !strcmp(str, "static")
		|| !strcmp(str, "struct") || !strcmp(str, "goto"))
		return (true);
	return (false);
}

// Returns 'true' if the string is an INTEGER.
bool isInteger(char* str)
{
	int i, len = strlen(str);

	if (len == 0)
		return (false);
	for (i = 0; i < len; i++) {
		if (str[i] != '0' && str[i] != '1' && str[i] != '2'
			&& str[i] != '3' && str[i] != '4' && str[i] != '5'
			&& str[i] != '6' && str[i] != '7' && str[i] != '8'
			&& str[i] != '9' || (str[i] == '-' && i > 0))
			return (false);
	}
	return (true);
}

// Returns 'true' if the string is a REAL NUMBER.
bool isRealNumber(char* str)
{
	int i, len = strlen(str);
	bool hasDecimal = false;

	if (len == 0)
		return (false);
	for (i = 0; i < len; i++) {
		if (str[i] != '0' && str[i] != '1' && str[i] != '2'
			&& str[i] != '3' && str[i] != '4' && str[i] != '5'
			&& str[i] != '6' && str[i] != '7' && str[i] != '8'
			&& str[i] != '9' && str[i] != '.' ||
			(str[i] == '-' && i > 0))
			return (false);
		if (str[i] == '.')
			hasDecimal = true;
	}
	return (hasDecimal);
}

// Extracts the SUBSTRING./*    */
char* subString(char* str, int left, int right)
{
	int i;
	char* subStr = (char*)malloc(
				sizeof(char) * (right - left + 2)); //suppose here a string this value will increase from left from right like 0,1,2 this will take memory with malloc

	for (i = left; i <= right; i++)
		subStr[i - left] = str[i];      //suppose her
	subStr[right - left + 1] = '\0';
	return (subStr);
}
// Extracts the SUBSTRING.  To get a substring here just call this function with a pointer variable and two integer which is left and right. with pointer here called a malloc function to allocate a block of memory for the sub string, After that here make a for loop from left value to right to identify the substring. It will terminated by using "/0" which is the null termination character It is used to mark the end of a string. Without it, has no way to know how long a substring goes. Then the function return the substruct

// Parsing the input STRING.
void parse(char* str)
{
    int keyword=0;
    int integer=0;
    int identifier=0;
    int arithmetic=0;
    int invalidIdentifier=0;

	int left = 0, right = 0;
	int len = strlen(str);

	while (right <= len && left <= right) {
		if (isDelimiter(str[right]) == false)
			right++;

		if (isDelimiter(str[right]) == true && left == right) {
			if (isOperator(str[right]) == true){
			   arithmetic++; //counter
			   printf("Arithmetic Operator : '%c' \n", str[right]);

			}

			right++;
			left = right;
		} else if (isDelimiter(str[right]) == true && left != right
				|| (right == len && left != right)) {
			char* subStr = subString(str, left, right - 1);

			if (isKeyword(subStr) == true){
			    keyword++; //counter
				printf("Keyword : '%s'\n", subStr);
			}

			else if (isInteger(subStr) == true){
			    integer++;
				printf("Integer : '%s'\n", subStr);}

			else if (isRealNumber(subStr) == true){
				printf("'%s' IS A REAL NUMBER\n", subStr);}

			else if (validIdentifier(subStr) == true
					&& isDelimiter(str[right - 1]) == false){
					identifier++;
					printf("Identifier : '%s' \n", subStr);
					}

			else if (validIdentifier(subStr) == false
					&& isDelimiter(str[right - 1]) == false){
					invalidIdentifier++;
					printf("Invalid Identifier :'%s'\n\n", subStr);
					}
			left = right;
		}
	}
	printf("Keyword : %d \n", keyword);
	printf("Integer : %d \n", integer);
	printf("Identifier : %d\n", identifier);
	printf("Arithmetic : %d\n", arithmetic);
	printf("Invalid Identifier : %d\n", invalidIdentifier);
	return;
}

int main()
{
	char str[100];
    gets (str );
	parse(str); // calling the parse function
	return (0);
}
