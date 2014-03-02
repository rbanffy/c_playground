Goto Fail
=========

From the now notorious "goto fail" code quality failure at Apple.

While editing, Emacs went out of its way to prevent the second goto
from being on the same column as the first. That would have made the
problem more obvious to a reviewer and, probably, to the original
writer.

Neither GCC nor Clang did generate any warning for the code
after the goto. Splint warned about it. I didn't check other code
analysis tools.

There is an interesting article about it on
https://blog.codecentric.de/en/2014/02/curly-braces/
