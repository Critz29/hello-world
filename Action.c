Action()
{

	web_add_header("Accept-Language", 
		"es-CR");

	web_add_auto_header("X-P2P-PeerDist", 
		"Version=1.1");

	web_url("kalimanjaro.hpswlabs.adapps.hp.com", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML",  
		LAST);

	return 0;
}