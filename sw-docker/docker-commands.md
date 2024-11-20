```bash
# ps: A command stand for process status.
# -a: A flag to show all the containers including those that are not running.
docker ps -a

# Stop all the containers currently running.
docker stop $(docker ps -a -q)

# up: Start and run all the containers define in the docker-compose yaml file.
# -d: A flag to detach the containers and run it in the background.
docker compose up -d 
```
