int main() {
char str[] = "abc";
char str2[] = "def";
char str3[] = str + str2; // abcdef
char str4[] = str - str2; // error
printf(str);
return 0;
}
