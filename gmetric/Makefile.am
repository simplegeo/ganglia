if STATIC_BUILD
GCFLAGS = 
GLDADD = 
GLDFLAGS = -static
else
GCFLAGS = 
GLDADD = 
GLDFLAGS = 
endif

AM_CFLAGS = -I../lib -I../include $(GCFLAGS) -DSYSCONFDIR='"$(sysconfdir)"'

bin_PROGRAMS = gmetric
gmetric_SOURCES =  gmetric.c cmdline.c cmdline.h
gmetric_LDADD   =  $(top_builddir)/lib/libganglia.la \
                   $(top_builddir)/lib/libgetopthelper.a \
	           $(top_builddir)/libmetrics/libmetrics.la \
		   $(GLDADD)

gmetric_LDFLAGS = $(GLDFLAGS)
