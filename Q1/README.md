Q1 – Turing Test and CAPTCHA Implementation

Student: MUPPALLA LIKITH
Roll No: SE24UCSE062
Course: Artificial Intelligence


# Objective

The objective of this experiment is to understand the basic concept of the **Turing Test** and **CAPTCHA**, and 
to implement simple C programs that simulate how these systems differentiate between human users and machines.


# Turing Test

The **Turing Test** is a method used to determine whether a computer can exhibit intelligent behavior similar to a human. 
In this test, a human judge interacts with two participants: a human and a machine. The judge asks questions and receives 
responses from both participants without knowing which one is the machine.

If the judge cannot reliably distinguish the machine from the human based on their responses, the machine is considered 
to have passed the Turing Test.

In this implementation, the program simulates a conversation between the user and the system. 
The system provides responses based on predefined keywords to imitate human-like interaction.


# Architecture

        Judge
          |
          v
   Interaction Module
      /          \
     v            v
  Bot Response   Human Input


**Explanation**

1. **Judge** – The user who interacts with the system and asks questions.
2. **Interaction Module** – Handles the communication between the judge and the system.
3. **Bot Response** – The program generates responses based on user input.
4. **Human Input** – The user provides questions or statements during the interaction.

**File**

`turing_test.c` – Simulates a simple conversation to represent a Turing Test scenario.



# CAPTCHA

**CAPTCHA** (Completely Automated Public Turing test to tell Computers and Humans Apart) is a security 
mechanism used to verify whether the user interacting with a system is a human or an automated program.

CAPTCHA presents a challenge, such as a randomly generated text or number sequence, which the user must 
enter correctly. Humans can easily recognize and reproduce the text, while automated bots often struggle to solve it.

In this implementation, the program generates a random sequence of characters and asks the user to enter 
the same sequence for verification.



# Architecture

   CAPTCHA Generator
           |
           v
    CAPTCHA Display
           |
           v
       User Input
           |
           v
    Verification Unit
           |
     Success / Failure


**Explanation**

1. **CAPTCHA Generator** – Creates a random string of characters.
2. **CAPTCHA Display** – Shows the generated CAPTCHA to the user.
3. **User Input** – The user enters the displayed CAPTCHA.
4. **Verification Unit** – Compares the generated CAPTCHA with the user input.
5. **Result** – If both match, access is granted; otherwise verification fails.

**File**

`captcha.c` – Generates a random CAPTCHA string and verifies the user input.



# Conclusion

The implemented programs demonstrate the fundamental concepts of the Turing Test and CAPTCHA systems. 
The Turing Test program simulates human-machine interaction,
while the CAPTCHA program verifies whether the user is human through a challenge-response mechanism. 
These implementations help in understanding how computers can 
attempt to imitate intelligence and how systems can prevent automated bot access.

