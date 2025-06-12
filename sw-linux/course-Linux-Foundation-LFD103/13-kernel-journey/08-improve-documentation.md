## $\textnormal{Enhance the Improve Kernele Documentation}$

> - Enhancing and improving kernel documentation is <br />
    a good way to engage the Kernel community and <br />
    learn different areas of the kernel.

> - Ways to learn about the Kernel.

```plaintext
Preparing to build the documentation
    There is a script which checks if you have
    all the needed dependencies to build the documentation.

    This script is called automatically when you run
        make htmldocs

    Alternatively, you can call the script directly by running:
        ./scripts/sphinx-pre-install

Building documents and looking for warnings
    Once you have all the requirements, you can do the building by running:
        make htmldocs > doc_make.log 2>&1

    Check for warnings and other errors you might find and see if you can fix them.
        Please keep in mind it is not trivial and/or easy to fix documentation warnings.
```
