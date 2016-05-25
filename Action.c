Action()
{

	web_add_cookie("s_fid=5704A70AC253C47A-0FC27D1A9A9141C6; DOMAIN=kalimanjaro.hpswlabs.adapps.hp.com");

	web_add_cookie("s_vi=[CS]v1|2B99B38E051D0699-4000190C40002043[CE]; DOMAIN=kalimanjaro.hpswlabs.adapps.hp.com");

	web_add_cookie("hp_last_segment=segment neutral; DOMAIN=kalimanjaro.hpswlabs.adapps.hp.com");

	web_add_cookie("EMID=; DOMAIN=kalimanjaro.hpswlabs.adapps.hp.com");

	web_add_cookie("hpeuck_answ=0; DOMAIN=kalimanjaro.hpswlabs.adapps.hp.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=r20swj13mr.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20160426; DOMAIN=r20swj13mr.microsoft.com");

	web_add_header("Accept-Language", 
		"es-CR");

	web_add_auto_header("X-P2P-PeerDist", 
		"Version=1.1");

	web_url("kalimanjaro.hpswlabs.adapps.hp.com", 
		"URL=http://kalimanjaro.hpswlabs.adapps.hp.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://r20swj13mr.microsoft.com/ieblocklist/v1/urlblockindex.bin", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20160426; DOMAIN=iecvlist.microsoft.com");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1434748155000/iecompatviewlist.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}