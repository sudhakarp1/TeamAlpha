Git Commands

git init : Initializes the folder for git.

  1) git clone <url>
  2) git status : Tells about the modifications or additions in your current working directory. Contains the staged as well as unstaged code. 
  3) git add <filename> : Adds the newly created or modified files to the staged area ready for commit.
  4) git commit -m "Comments" : Commits the staged changes with the commit message.
  5) git diff : Shows the difference between the last commit and the present changes.
  6) Removing file
  		git rm --cached <file> : Removing the file from the staged area.
  		git rm -f <file> : Removing the file permanently from the folder.
  7) moving files
  		git mv fileFrom fileTo
  8) git pull : Pulling down changes from the main server.
  9) Log of previous commits
  		git last : Log of last commit
  		git log : Log of previous commits.
  		git log -p -2 : Log of last commits also showing two lines of difference.
  		git log --pretty = format : "%h - %an, %ar : %s" : Shows the log in a pretty manner.
  10) Tags
  		git tag v1.2-lw : Enables version tag here v1.2 
  		git show : Shows the tag.