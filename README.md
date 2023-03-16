# My-Harvard-CS50-Programs
My programs submitted in Harvard's CS50 course.  
CS50 library is needed to run this code - [code.cs50.io](https://code.cs50.io/)  
**Complexity of code is in descending order**  
<br>


## Programs in C
### [Readability](https://cs50.harvard.edu/x/2023/psets/2/readability/)

*Calculates the approximate grade level needed to comprehend some text using the Coleman-Liau index.*  
> Program asks for text from the user. Returns the amount of letters, words, sentences, and reading level required for the text calculated by using the index.

### [Caesar](https://cs50.harvard.edu/x/2023/psets/2/caesar/)
*Encrypts plaintext into ciphertext using Caesar's Cipher*  
> User runs the program, providing the key as a CLA. Program asks user for the plaintext and shifts each letter by the key while printing any non-alphanumeric char as normal.

### [Scrabble](https://cs50.harvard.edu/x/2023/labs/2/)
*Determine which of two Scrabble words is worth more.*
> Points are assigned to each letter of the alphabet. User enters two words and the program returns the "winner". Upper and lowercase letters have the same value.

### [Hours](https://cs50.harvard.edu/x/2023/problems/2/hours/)
*Calculates, based on a user’s input, a total number of hours or an average number of hours across a given number of days.*  
> User enters the amount of days they have been in the class and enters the amount of hours spent studying for each day. User can choose to receive the total or average amount of hours spent studying.  

### [Mario](https://cs50.harvard.edu/x/2023/psets/1/mario/more/)
*Recreate the pyramid blocks in Super Mario with the size determined by user input*  
> User enters the height of the pyramid (1-8) and the program uses a loop to print repeated '#' keeping formatting intact as it grows.  

### [Cash](https://cs50.harvard.edu/x/2023/psets/1/cash/)
*Prompts the user for the number of cents that a customer is owed and then prints the smallest number of coins with which that change can be made.*  
> Program uses functions for each coin type that divides the user input by the coin's value as an int which truncates and returns the result. Does not show what exact coins to give to the customer as it was outside the scope of this assignment.
