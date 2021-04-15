# Requirements


## Introduction
 
The aim of this application is to throw light on the basics of Cryptography and Learn & Practice basic Encryption and Decryption through substitution techniques. Many Cyber Security courses expect students to have an understanding of essential concepts underlying Cryptographic system. 
The application covers five substitution techniques: Caesar Cipher, Monoalphabetic Cipher, Playfair Cipher, Hill Cipher and Polyalphabetic Cipher.
The user can use the application in the following manner:
1.	Learn: Read about the cipher and understand the concept underlying
2.	Practice: Answer the questions for both Encryption and Decryption and check their understanding.

Use this application as a kickstart module to your journey in Cryptography and Network Security


## Research

Cyber security is of absolute importance to today’s world and more people are starting to show interest in this field. While today’s cyber security systems have come a long way and evolved to combat modern problems, it is always beneficial to go back to the beginning and start from the basics. 
Many courses either move to advanced concepts swiftly after briefing the basics or indulge in too much detail which is exhausting for a beginner. 
Features of proposed application:
1.	Concise Information: Every topic will consist of an introduction, the concept of encryption and decryption and the formulae used.
2.	Practice: The user is prompted a set of questions which enables to check their understanding

Target Audience:
1.	Computer Science (or related) Students/Faculties
2.	Cryptography Enthusiasts
3.	Beginners to Cyber Security


## Cost and Features
TBD

## Defining Our System

![System Outline](/1_Requirements/systemOutline.png)

The application provides the following options on entering
1. Introduction
2. Caesar Cipher
3. Monoalphabetic Cipher
4. Playfair Cipher
5. Hill Cipher
6. Polyalphabetic Cipher

for Options 2-6, the user can choose to Learn or Practice.

## SWOT ANALYSIS
![SWOT-Sample](/1_Requirements/CryptoWhat_SWOTAnalysis.png)

# 4W&#39;s and 1&#39;H

## Who:


This application aims to reach out to
1.	Computer Science (or related) Students/Faculties
2.	Cryptography Enthusiasts
3.	Beginners to Cyber Security


## What:

The application aims for users to learn and practice basic encryption or decryption technigues.
The application aims to be concise and apt for beginners in Cryptography.
The application is built with C programming language and Make.


## When:

Over the past few years, Cyber Security has gained momentum, Briefing about the basics of Cryptography is of utmost importance.

## Where:

This application can be utilised globally on an online platform.

## How:

By creating concise and apt modules along with simultaneous practice questions,
the application aims to reduce exhaustion in learners and increases engagement.

# Detail requirements
## High Level Requirements:
| ID   | Description | Status (Implemented/Future) |
|---|---|---|
| HR01 | User shall be able to choose what topic to explore | Implemented |
| HR02 | User shall be able to view and learn each topic | Implemented for one choice |
| HR03 | User shall be able to practice given questions for each topic |  Implemented for one choice |
| HR04 | User shall be able to verify their answers for practice questions | Implemented for one choice |
| HR05 | System should be able to run smoothly with any given user input | Future |

##  Low level Requirements:

| ID | Description | Status (Implemented/Future)
|---|---|---|
| LR01 | User shall be able to choose topic in one of 6 ways from the Home page 1) Introduction 2) Caesar Cipher 3) Monoalphabetic Cipher 4) Playfair Cipher 5) Hill Cipher 6) Polyalphabteic Cipher | Implemented |
| LR02 | User shall be redirected to a new page containing Information depending on the choice of topic | Implemented for one choice |
| LR03 | User shall be able to choose to Practice or go to Home page | Future |
| LR04 | For every question user is prompted to enter a valid answer which is sent for verification | Implemented |
| LR05 | User shall be displayed error if entered input consists of characters except alphabet characters and space | Implemented |
| LR06 | User shall be able to receive a result of Correct/Incorrrect for every answer to the Practice Question | Implemented |
| LR07 | User shall be able to choose to retry the Practice Questions for that topic or go back to Home page.| Future |