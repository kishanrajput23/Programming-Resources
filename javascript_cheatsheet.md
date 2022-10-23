# JavaScript Basics
Let’s start off with the basics – how to include JavaScript in a website.

Including JavaScript in an HTML Page
To include JavaScript inside a page, you need to wrap it in <script> tags:

<script type="text/javascript">

//JS code goes here


</script>

   

With this input, the browser can identify and execute the code properly.

## Call an External JavaScript File
You can also place JavaScript in its own file and name it inside your HTML. That way, you can keep different types of code separate from one another, making for better-organized files. If your code is in a file called myscript.js, you would call it:

<script src="myscript.js"></script>

## Including Comments


Comments are important because they help other people understand what is going on in your code or remind you if you forgot something yourself. Keep in mind that they have to be marked properly so the browser won’t try to execute them.

In JavaScript you have two different options:

- Single-line comments — To include a comment that is limited to a single line, precede it with //
- Multi-line comments — In case you want to write longer comments between several lines, wrap it in /* and */ to avoid it from being executed

## Variables in JavaScript

Variables are stand-in values that you can use to perform operations. You should be familiar with them from math class.

### var, const, let
You have three different possibilities for declaring a variable in JavaScript, each with their own specialties:

- var — The most common variable. It can be reassigned but only accessed within a function. Variables defined with var move to the top when the code is executed.
- const — Can not be reassigned and not accessible before they appear within the code.
- let — Similar to const, the let variable can be reassigned but not re-declared.
## Data Types
Variables can contain different types of values and data types. You use = to assign them:

- Numbers — var age = 23
- Variables — var x
- Text (strings) — var a = "init"
- Operations — var b = 1 + 2 + 3
True or false statements — var c = true
- Constant numbers — const PI = 3.14
- Objects — var name = {firstName:"John", lastName:"Doe"}

There are more possibilities. Note that variables are case sensitive. That means lastname and lastName will be handled as two different variables.

## Objects
Objects are certain kinds of variables. They are variables that can have their own values and methods. The latter are actions that you can perform on objects.
```javascript 
var person = {
    firstName:"John",
    lastName:"Doe",
    age:20,
    nationality:"German"
};
```

## The Next Level: Arrays
Next up in our JavaScript cheat sheet are arrays. Arrays are part of many different programming languages. They are a way of organizing variables and properties into groups. Here’s how to create one in JavaScript:
```javascript
var fruit = ["Banana", "Apple", "Pear"];
```
Now you have an array called fruit which contains three items that you can use for future operations.

## Array Methods
Once you have created arrays, there are a few things you can do with them:

- concat() — Join several arrays into one
- indexOf() — Returns the first position at which a given element appears in an array
- join() — Combine elements of an array into a single string and return the string
- lastIndexOf() — Gives the last position at which a given element appears in an array
- pop() — Removes the last element of an array
- push() — Add a new element at the end
- reverse() — Sort elements in a descending order
- shift() — Remove the first element of an array
- slice() — Pulls a copy of a portion of an array into a new array
- sort() — Sorts elements alphabetically
- slice() — Adds elements in a specified way and position
- toString() — Converts elements to strings
- unshift() —Adds a new element to the beginning
- valueOf() — Returns the primitive value of the specified object
## Operators
If you have variables, you can use them to perform different kinds of operations. To do so, you need operators.

### Basic Operators
+ — Addition
- — Subtraction
* — Multiplication
- / — Division
- (...) — Grouping operator, operations within brackets are executed earlier than those outside
- % — Modulus (remainder )
- ++ — Increment numbers
- -- — Decrement numbers
### Comparison Operators
- == — Equal to
- === — Equal value and equal type
- != — Not equal
- !== — Not equal value or not equal type
- > — Greater than
- < — Less than
->
= — Greater than or equal to
- <= — Less than or equal to
- ? — Ternary operator
## Logical Operators
- && — Logical and
- || — Logical or
-! — Logical not
## Bitwise Operators

- & — AND statement
- | — OR statement
- ~ — NOT
- ^ — XOR
- << — Left shift
- >> — Right shift
- >>> — Zero fill right shift


## Functions
JavaScript functions are blocks of code that perform a certain task. A basic function looks like this:
```javascript
function name(parameter1, parameter2, parameter3) {
    // what the function does
```
As you can see, it consists of the function keyword plus a name. The function’s parameters are in the brackets and you have curly brackets around what the function performs. You can create your own, but to make your life easier – there are also a number of default functions.

## Outputting Data
A common application for functions is the output of data. For the output, you have the following options:

- alert() — Output data in an alert box in the browser window
- confirm() — Opens up a yes/no dialog and returns true/false depending on user click
- console.log() — Writes information to the browser console, good for debugging purposes
- document.write() — Write directly to the HTML document
- prompt() — Creates a dialogue for user input
## Global Functions
Global functions are functions built into every browser capable of running JavaScript.

- decodeURI() — Decodes a Uniform Resource Identifier (URI) created by encodeURI or similar
- decodeURIComponent() — Decodes a URI component
- encodeURI() — Encodes a URI into UTF-8
- encodeURIComponent() — Same but for URI components
- eval() — Evaluates JavaScript code represented as a string
- isFinite() — Determines whether a passed value is a finite number
- isNaN() — Determines whether a value is NaN or not
- Number() —- Returns a number converted from its argument
- parseFloat() — Parses an argument and returns a floating-point number
- parseInt() — Parses its argument and returns an integer
## JavaScript Loops
Loops are part of most programming languages. They allow you to execute blocks of code desired number of times with different values:
```javascript
for (before loop; condition for loop; execute after loop) {
    // what to do during the loop
}
```
You have several parameters to create loops:

- for — The most common way to create a loop in JavaScript
- while — Sets up conditions under which a loop executes
- do while — Similar to the while loop but it executes at least once and performs a check at the end to see if the condition is met to execute again
- break —Used to stop and exit the cycle at certain conditions
- continue — Skip parts of the cycle if certain conditions are met
## If – Else Statements
These types of statements are easy to understand. Using them, you can set conditions for when your code is executed. If certain conditions apply, something is done, if not – something else is executed.
```javascript
if (condition) {
    // what to do if condition is met
} else {
    // what to do if condition is not met
}
```
A similar concept to if else is the switch statement. However, using the switch you select one of several code blocks to execute.

## Strings
Strings are what JavaScript calls to text that does not perform a function but can appear on the screen.
```javasript
var person = "John Doe";
```
In this case, John Doe is the string.

## Escape Characters
In JavaScript, strings are marked with single or double-quotes. If you want to use quotation marks in a string, you need to use special characters:

- \' — Single quote
 - \" — Double quote
Aside from that you also have additional escape characters:

- \\ — Backslash
- \b — Backspace
- \f — Form feed
- \n — New line
- \r — Carriage return
- \t — Horizontal tabulator
-  \v — Vertical tabulator
## String Methods
There are many different ways to work with strings:

- charAt() — Returns a character at a specified position inside a string
- charCodeAt() — Gives you the Unicode of a character at that position
- concat() — Concatenates (joins) two or more strings into one
- fromCharCode() — Returns a string created from the specified sequence of UTF-16 code units
- indexOf() — Provides the position of the first occurrence of a specified text within a string
- lastIndexOf() — Same as indexOf() but with the last occurrence, searching backward
- match() — Retrieves the matches of a string against a search pattern
- replace() — Find and replace specified text in a string
- search() — Executes a search for a matching text and returns its position
- slice() — Extracts a section of a string and returns it as a new string
- split() — Splits a string object into an array of strings at a specified position
- substr() —  Similar to slice() but extracts a substring depending on a specified number of characters
- substring() — Also similar to slice()  but can’t accept negative indices
- toLowerCase() — Convert strings to lower case
- toUpperCase() — Convert strings to upper case
- valueOf() — Returns the primitive value (that has no properties or methods) of a string object