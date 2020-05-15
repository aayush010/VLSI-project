<project xmlns="com.autoesl.autopilot.project" name="mqdss_48.prj" top="crypto_sign_keypair">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow askAgain="false" name="csim" csimMode="2" lastCsimMode="2"/>
    </Simulation>
    <files xmlns="">
        <file name="../../newtest_sign.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="aes.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="fips202.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="gf31.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="mq.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="rng.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="sign.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="keypair" status="active"/>
    </solutions>
</project>

