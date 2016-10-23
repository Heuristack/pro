/* sudo dtrace -s hello.s */

BEGIN
{
    trace("Hello,World!");
    exit(0);
}

END
{
    trace("Bye!");
    exit(0);
}

