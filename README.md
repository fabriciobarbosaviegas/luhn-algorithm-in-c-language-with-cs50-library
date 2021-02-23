<h1> Luhn algorithm in c language with cs50 library </h1>

<p>This is a simple application able executate the luhn algorithm using the c language with the cs50 library of harvard namesake course.</p>

<h2>But what's Luhn algorithm?</h2>

<p>The Luhn algorithm or Luhn formula, also known as the "modulus 10" or "mod 10" algorithm, named after its creator, IBM scientist Hans Peter Luhn, is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers, IMEI numbers, National Provider Identifier numbers in the United States, Canadian Social Insurance Numbers, Israeli ID Numbers, South African ID Numbers, Greek Social Security Numbers (ΑΜΚΑ), and survey codes appearing on McDonald's, Taco Bell, and Tractor Supply Co. receipts.</p>
<p>The algorithm is in the public domain and is in wide use today. It is specified in ISO/IEC 7812-1. It is not intended to be a cryptographically secure hash function; it was designed to protect against accidental errors, not malicious attacks. Most credit cards and many government identification numbers use the algorithm as a simple method of distinguishing valid numbers from mistyped or otherwise incorrect numbers.</p>

<h2>How is makes?</h2>

<p>The formula verifies a number against its included check digit, which is usually appended to a partial account number to generate the full account number. This number must pass the following test:

1.  From the rightmost digit (excluding the check digit) and moving left, double the value of every second digit. The check digit is neither doubled nor included in this calculation; the first digit doubled is the digit located immediately left of the check digit. If the result of this doubling operation is greater than 9 (e.g., 8 × 2 = 16), then add the digits of the result (e.g., 16: 1 + 6 = 7, 18: 1 + 8 = 9) or, equivalently, subtract 9 from the result (e.g., 16: 16 − 9 = 7, 18: 18 − 9 = 9).

2.  Take the sum of all the digits (including the check digit).

3.  If the total modulo 10 is equal to 0 (if the total ends in zero) then the number is valid according to the Luhn formula; otherwise it is not valid.</p>

<h2>Why this code is using cs50 library?</h2>

<p>Originally this code was written as part of a problem set of harvard's cs50 this library aims to simplify the study of c language for programmers beginning in the language but this does not influence the final result.</p>

<h2>Limitations?</h2>

<p>The code has a limitation, it only recognizes Mastercard, Visa and Amex cards.</p>

<h2>That said see the code!</h2>
