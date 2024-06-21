# 📒 Simple Project Recorder

## Overview

This is a project to record me and my friend's projects to know who is the better programmer

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

### Save and Quit

Needs to overwrite all edited files - saving all data edited - before the program exits.

