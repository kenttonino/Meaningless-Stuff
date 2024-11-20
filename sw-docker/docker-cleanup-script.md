```bash
# Go to the User System Resources (/usr) binary directory.
cd /usr/bin

# Create the script file.
sudo touch docker-cleanup

# Open the script vile.
sudo vim docker-cleanup

# Insert the script below.
#!/bin/bash
docker system prune -a && docker container prune && docker volume prune -a && docker network prune

# Change permission and make it executable.
sudo chmod +x docker-cleanup
```
