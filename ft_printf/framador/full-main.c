int main() {

    int custom_printf_result, printf_result;
    char c = 'A';
    char *str = "Hello, World!";
    void *ptr = &c;
    int num = 42;
    int hexNum = 255;
	
    // Test %c
	
    custom_printf_result = ft_printf("%%c: %c\n", c);
    printf_result = printf("%%c: %c\n", c);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for %%c\n");
    }

    // Test %s
	
    custom_printf_result = ft_printf("%%s: %s\n", str);
    printf_result = printf("%%s: %s\n", str);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for %%s\n");
    }
	
    // Test %p
	
    custom_printf_result = ft_printf("%%p: %p\n", ptr);
    printf_result = printf("%%p: %p\n", ptr);
	printf("%d, %d\n", custom_printf_result, printf_result);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for %%p\n");
    }

    // Test %d and %i
	
    custom_printf_result = ft_printf("%%d: %d\n", num);
    printf_result = printf("%%d: %d\n", num);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for %%d\n");
    }
    
    custom_printf_result = ft_printf("%%i: %i\n", num);
    printf_result = printf("%%i: %i\n", num);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for %%i\n");
    }

    // Test %x and %X
	
    custom_printf_result = ft_printf("%%x: %x\n", hexNum);
    printf_result = printf("%%x: %x\n", hexNum);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for %%x\n");
    }
	
    custom_printf_result = ft_printf("%%X: %X\n", hexNum);
    printf_result = printf("%%X: %X\n", hexNum);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for %%X\n");
    }

    // Test %%
	
    custom_printf_result = ft_printf("%%%%: %%\n");
    printf_result = printf("%%%%: %%\n");
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for %%\n");
	}
	// Test maximum and minimum values
	
    custom_printf_result = ft_printf("%%d: %d\n", INT_MAX);
    printf_result = printf("%%d: %d\n", INT_MAX);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for maximum value of %%d\n");
    }
	
    custom_printf_result = ft_printf("%%d: %d\n", INT_MIN);
    printf_result = printf("%%d: %d\n", INT_MIN);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for minimum value of %%d\n");
    }
	
    custom_printf_result = ft_printf("%%u: %u\n", UINT_MAX);
    printf_result = printf("%%u: %u\n", UINT_MAX);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for maximum value of %%u\n");
    }
	
    custom_printf_result = ft_printf("%%x: %x\n", UINT_MAX);
    printf_result = printf("%%x: %x\n", UINT_MAX);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for maximum value of %%x\n");
    }
	
    custom_printf_result = ft_printf("%%X: %X\n", UINT_MAX);
    printf_result = printf("%%X: %X\n", UINT_MAX);
    if (custom_printf_result != printf_result) {
        printf("Custom ft_printf and printf return different values for maximum value of %%X\n");
    }
    return 0;
}
