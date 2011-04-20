/**
 * @file debug_msg.c Debug Message function
 */
/* $Id: debug_msg.c 837 2007-09-19 23:29:51Z bnicholes $ */
#include <stdio.h>
#include <stdarg.h>

int debug_level = 0;

/**
 * @fn void debug_msg(const char *format, ...)
 * Prints the message to STDERR if DEBUG is #defined
 * @param format The format of the msg (see printf manpage)
 * @param ... Optional arguments
 */
void
debug_msg(const char *format, ...)
{
   if (debug_level > 1 && format)
      {
         va_list ap;
         va_start(ap, format);
         vfprintf(stderr, format, ap);
         fprintf(stderr,"\n");
         va_end(ap);
      } 
   return;
}

void
set_debug_msg_level(int level)
{
    debug_level = level;
    return;
}

int
get_debug_msg_level()
{
    return debug_level;
}

