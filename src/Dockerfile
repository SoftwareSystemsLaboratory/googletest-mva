#
# Run Google Tests in Docker
# Any executable ending with _tests is automatically found (using find) and run
#

FROM coenvl/googletest

ENV BUILD /sandbox/build

WORKDIR /sandbox

ADD . /sandbox

RUN rm -f ${BUILD}/CMakeCache.txt && \
    mkdir -p ${BUILD} && \
    cd ${BUILD} && \
    cmake .. && \
    make && \
    find ${BUILD} -name '*_tests' -exec {} \;

