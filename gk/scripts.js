// Vigenere encryption
function encryptVigenere() {
    const email = document.getElementById("email").value;
    const key = [2, 7, 15, 27]; // Key K = (2, 7, 15, 27)
    const alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const specialChars = [".", "-", "@"]; // Special characters

    let encryptedText = "";
    let keyIndex = 0;

    for (let i = 0; i < email.length; i++) {
        const char = email[i].toUpperCase();
        
        if (alphabet.includes(char)) {
            const pos = alphabet.indexOf(char);
            const encryptedPos = (pos + key[keyIndex % key.length]) % 26; // Z26
            encryptedText += alphabet[encryptedPos];
            keyIndex++;
        } else if (specialChars.includes(char)) {
            // Special chars mapping: '.' -> 26, '-' -> 27, '@' -> 28
            const specialPos = specialChars.indexOf(char) + 26;
            const encryptedSpecialPos = (specialPos + key[keyIndex % key.length]) % 29;
            encryptedText += specialChars[encryptedSpecialPos - 26];
            keyIndex++;
        } else {
            encryptedText += char; // Non-alphabetic chars are left unchanged
        }
    }

    document.getElementById("vigenere-result").value = encryptedText;
}

// RSA encryption
function encryptRSA() {
    const message = document.getElementById("rsa-message").value.toUpperCase();
    const p = 19, q = 37;
    const n = p * q; // n = 703
    const e = 5; // Public exponent e = 5

    let encryptedMessage = "";
    
    const alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (let i = 0; i < message.length; i++) {
        const char = message[i];
        if (alphabet.includes(char)) {
            const m = alphabet.indexOf(char); // Convert char to number
            const c = Math.pow(m, e) % n; // RSA encryption: c = m^e % n
            encryptedMessage += c + " ";
        }
    }

    document.getElementById("rsa-result").value = encryptedMessage.trim();
}
