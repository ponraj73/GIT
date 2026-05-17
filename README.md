# GIT Learning

This repository contains my Git learning notes and practice files.

## Files
- add.c
- notes.md
- README.md

## What is GIT?

GIT is a Distributed Version Control System (VCS).

It is used to track changes made in files and projects.  
GIT helps us know:

- What changes were made
- Who made the changes
- When the changes were made
- Which files were modified, added, or deleted

GIT is mainly used in software development projects.

---

## Repository (Repo)

REPO stands for Repository.

A repository is simply a project folder that is tracked by GIT.

When we initialize GIT inside a folder, a hidden folder called `.git` is created.

The `.git` folder stores all details related to:

- commit history
- tracked files
- branches
- configuration
- change history

---

## Who Created GIT?

GIT was created by Linus Torvalds.

He also created the Linux operating system kernel.

---

# Difference Between GIT and GITHUB

GIT

1. GIT is a Version Control System tool.
2. It tracks file changes and project history.
3. Works locally on our computer.
4. Keeps track of who changed what and when.
5. No internet is required for basic operations.

GITHUB

1. GITHUB is an online platform used to store Git repositories. 
2. It helps developers collaborate and work together. 
3. Works on the cloud/internet. 
4. Allows multiple developers to share and manage code. 
5. Internet is required to push or pull code. 

### Important Note

When a repository is stored on GitHub, it is called a **Remote Repository**.

Some companies use platforms other than GitHub, such as:

- Bitbucket
- GitLab
- AWS CodeCommit

---

# Creating Git Configuration

## 1. Set User Name

```bash
git config --global user.name "ponraj73"
````

---

## 2. Set Email ID

```bash
git config --global user.email "emailid@gmail.com"
```

---

## 3. Set Default Branch Name

```bash
git config --global init.defaultBranch main
```

---

## 4. View Git Configuration

```bash
git config --list
```

This command shows all Git configuration details.

---

# Initialize a Git Repository

To initialize a Git repository:

```bash
git init
```

Example response:

```bash
Initialized empty Git repository in C:/Users/vprak/Desktop/Ponraj/Learning/Git/.git/
```

Now the folder becomes a Git repository.

A hidden `.git` folder is created, and GIT starts tracking changes inside this project.

---

# Creating Files in the Repository

Suppose we create a new file like:

```bash
add.c
```

Initially, Git shows the file status as: `U` means: Untracked

This means Git knows the file exists, but it is not tracking it yet.

---

# Checking Repository Status

Command:

```bash
git status
```

This command shows:

* current branch
* modified files
* untracked files
* staged files
* commit status

Example:

```bash
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)

        add.c
        readme.md
```

---

# Adding Files to Git

To add a single file:

```bash
git add add.c
```

Now the file moves from: U -> A
Where:

* `U` = Untracked
* `A` = Added/Staged

Example:

```bash
Changes to be committed:
  (use "git rm --cached <file>..." to unstage)

        new file:   add.c
```

This means Git is now ready to track this file.

---

## Add Multiple Files

To add all files in the current folder:

```bash
git add .
```

This stages all modified and new files.

---

# Commiting Changes

A commit saves the current state of the project.

Command:

```bash
git commit -m "adding add.c file"
```

Example:

```bash
[main (root-commit) 24d4816] adding add.c file
 1 file changed, 12 insertions(+)
 create mode 100644 add.c
```

---

# Viewing Commit History

Command:

```bash
git log
```

This command shows:

* commit history
* commit ID
* author details
* commit date
* commit message

Example:

```bash
commit 24d4816b1e588d8277782b93d1de88a2e359a6aa (HEAD -> main)

Author: ponraj73 <ponraj5656@gmail.com>

Date: Sun May 17 14:42:25 2026 +0530

    adding add.c file
```

---

# Going to Previous Versions in GIT

Sometimes we may need to view older versions of a project.

For example:

- code from 2 days ago
- previous working version
- old commit before a bug

---

## Go to an Old Commit

```bash
git checkout <commit_id>
````

Example:

```bash
git checkout 24d4816
```

After this:

* Git moves to that commit
* Old files will appear
* New files added after that commit will not appear

---

## Return to Current Version

```bash
git checkout main
```

This brings us back to the latest version of the project.

---

## Force Checkout

```bash
git checkout -f main
```

This command:

* discards all uncommitted changes
* forcefully returns to the `main` branch

Use carefully because changes will be lost.

---

# Branch in GIT

A branch is a separate copy of the project used for development or testing.

The `main` branch usually contains stable and working code.

If we directly modify the `main` branch, bugs or errors may affect the project.  
So developers create separate branches to develop new features safely.

After testing, the changes can be merged back into the `main` branch.

---

# Create a Branch

```bash
git branch <branch_name>
````
---

branch_name = dev
# Switch to a Branch

```bash 
git checkout dev
```

This moves from the current branch to the `dev` branch.

---

# Create and Switch Branch Directly

```bash
git checkout -b <branch_name>
```

This command:

* creates a new branch
* automatically switches to that branch

---

# View All Branches

```bash 
git branch
```

The current branch will be marked with `*`.
---
