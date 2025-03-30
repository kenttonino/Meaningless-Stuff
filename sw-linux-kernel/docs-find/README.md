## Navigation Aid

| Reference |
| --------- |
| https://kernelnewbies.org/KernelHackingTools#Navigation_Aid |

> - Finding the declaration (definitino) of some code or some particular data:

```sh
# Option 1.
find . -exec grep --with-filename myfunction '{}' \;

# Option 2.
find . -name '*.[chS]' | xargs egrep -n "myregularexpression";

# Option 3.
# Uses the GNU grep.
egrep -r --include "*.[chS]" "myregularexpression" .
```
