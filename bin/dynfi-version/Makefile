# $FreeBSD$

PACKAGE=runtime
SCRIPTS= dynfi-version
MAN=
CLEANFILES = dynfi-version dynfi-version.sh
NEWVERS = ${SRCTOP}/sys/conf/newvers.sh

dynfi-version.sh: ${.CURDIR}/dynfi-version.sh.in
	eval $$(sh ${NEWVERS} -v); \
	if ! sed -e "\
			s/@@TYPE@@/$${TYPE}/g; \
			s/@@REVISION@@/$${REVISION}/g; \
			s/@@BRANCH@@/$${BRANCH}/g; \
			s/@@DYNFI_VERSION@@/$${DYNFI_VERSION}/g; \
		" ${.CURDIR}/dynfi-version.sh.in >${.TARGET} ; then \
		rm -f ${.TARGET} ; \
		exit 1 ; \
	fi

.include <bsd.prog.mk>
