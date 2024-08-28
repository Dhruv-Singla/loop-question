# loop-question

Input Handling: The program takes an integer n as input, which represents the size of the array, followed by n integers that constitute the array.

Initialization: Two variables, maxi and cnt, are initialized. maxi tracks the maximum length of consecutive non-zero elements, while cnt counts the current streak of non-zero elements.

Iteration: The program iterates through the array. For each element:
            If the element is 0, cnt is reset to 0.
            If the element is non-zero, cnt is incremented.
            maxi is updated to the maximum of its current value and cnt.

Output: After processing the entire array, the program outputs the maximum length of consecutive non-zero elements.

Use Case: This program is useful for analyzing sequences within arrays where the continuity of non-zero values is significant.
