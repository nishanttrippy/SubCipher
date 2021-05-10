#include "cypher.h"
#include <cctype>


// Encrypts 2nd input
void substitutionCypherEncrypt(const std::string& cypher, const std::string& input, std::string& output)
{
	// TODO: Complete the function
    /* Making a string that contains all the alphabets to replace the alphabet with the cipher
    characters at the same position or index. */
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < input.length(); i++) {
        //Checking if the input is an alphabet or not
        if(isalpha(input[i])) {
            //checking if the input is in lower case
            if(islower(input[i])) {
                //setting the encrypted letter to lower case according to input
                output += tolower(cypher[alphabet.find(input[i])]);
            }
            //if it's upper case do this
            else {
                //setting the encrypted letter to upper case according to input.
                output += toupper(cypher[alphabet.find(tolower(input[i]))]);
            }
        }
        /* If input is not an alphabet, make the output same as the input (spaces/special Characters) */
        else {
            output += input[i];
        }
        
    }
    
}

// Decrypts 2nd input
void substitutionCypherDecrypt(const std::string& cypher, const std::string& input, std::string& output)
{
    // TODO: Complete the function
    /* Making a string that contains all the alphabets to replace the alphabet with the cipher
    characters at the same position or index. */
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    //Using same logic as encryption but reversing it to set alphabet according to cipher.
    for(int i = 0; i < input.length(); i++) {
        if(isalpha(input[i])) {
            if(islower(input[i])) {
                output += tolower(alphabet[cypher.find(toupper(input[i]))]);
            }
            else {
                output += toupper(alphabet[cypher.find(toupper(input[i]))]);
            }
        }
        else {
            output += input[i];
        }
        
    }
}

