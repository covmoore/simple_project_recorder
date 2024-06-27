# 📒 Simple Project Recorder

## Overview

This is a project to record me and my friend's projects to know who is the better programmer.

## Technique

- Pop up possible commands:

```
Menu
1. Get a user's info
2. Enter a user's info
3. Find out who is the best programmer
4. Save and Quit
```
### Get a user's info

1. List users like so:

```
1. Ben
2. Isaac
3. Noah
...
Type 'exit' to go back to menu
```
2. When a user enters number

- If the number is not on the list, tell them "User does not exist, try again."
- If the number is on the list, show a list of user's projects
- Let them go back to menu

### Enter user's info
- If user does not exist, create a new user text file
- If user does already exist (checks for file <username.txt>), Prompt them with this:
    ```
    1. View Projects
    2. Delete a Project
    3. Add new Project

    Type 'exit' to go back to menu
    ```

1. View Projects: show their project info similar to previous step

2. Delete a Project: Say "which project would you like to delete and prompt them with a list of their projects.

3. Add a project: add a new project to the list, store in memory.

### Find out who is the best programmer

Have a text show up saying:

```
The best programmer is <user>! They currently have <X> projects completed. With their latest one being <Project_Name> written in <Programming_language>!

Type 'exit' to go back to menu
```

### Quit

Exits program.

## Technique

### Option 1 (Read)

If your reading in User information with option 1, read in all_users.txt. When a user is selected, read directly from text document. This will load a single user's information in stack memory

### Option 2 (Write)

When a user is selected, read user's text file into heap memory. Load information into a Linked List of project_info. project_info is a struct.

If user adds information, create new struct and add it to the Linked Lists.

If user deletes project, delete old struct from the 

When user exits to main menu, overwrite file.

## Option 3 (Calculate Bast Programmer)

Read and Load each file separately. Count how many completed projects are in that user file. If the count is higher than the max, then replace the previous max. This will keep only two people's information in heap at all times - the max and the temp being read.

